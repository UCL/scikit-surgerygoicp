scikit-surgerygoicp
------------------

[![Build Status](https://travis-ci.com/MattClarkson/scikit-surgerygoicp.svg?branch=master)](https://travis-ci.org/github/UCL/scikit-surgerygoicp)
[![Build Status](https://ci.appveyor.com/api/projects/status/5pm89ej732c1ekf0/branch/master)](https://ci.appveyor.com/project/tdowrick/scikit-surgerygoicp)


Purpose
-------

This is a re-wrapping of the GoICP algorithm in https://github.com/aalavandhaann/go-icp_cython using PyBind11.

`pip install scikit-surgerygoicp`

Working on Ubunutu (Python 3.6, 3.7, 3.8), Mac (3.6, 3.7, 3.8) and Windows (3.6, 3.7)

Usage
-----

Only the below classes have been wrapped:
* GoICP
* POINT3D
* ROTNODE
* TRANSNODE

A simplified usage is shown below. See `Testing/test.py` for a full example.

```
import numpy as np;
from sksurgerygoicppython import GoICP, POINT3D, ROTNODE, TRANSNODE;

def loadPointCloud(filename):
    pcloud = np.loadtxt(filename, skiprows=1);
    plist = pcloud.tolist();
    p3dlist = [];
    for x,y,z in plist:
        pt = POINT3D(x,y,z);
        p3dlist.append(pt);
    return pcloud.shape[0], p3dlist;

goicp = GoICP();
Nm, a_points = loadPointCloud('./Testing/Data/model_bunny.txt');
Nd, b_points = loadPointCloud('./Testing/Data/data_bunny.txt');
goicp.loadModelAndData(Nm, a_points, Nd, b_points);
goicp.setDTSizeAndFactor(300, 2.0);
goicp.BuildDT();
goicp.Register();
print(goicp.optimalRotation()); # A python list of 3x3 is returned with the optimal rotation
print(goicp.optimalTranslation());# A python list of 1x3 is returned with the optimal translation
```

Credits
-------

https://github.com/aalavandhaann/go-icp_cython
https://github.com/yangjiaolong/Go-ICP

Preferred Branching Workflow for Contributions.
-----------------------------------------------

We welcome contributions to this project. Please use the following workflow.

 1. Raise issue in this project's Github Issue Tracker.
 2. Fork repository.
 3. Create a feature branch called ```<issue-number>-<some-short-description>```
    replacing ```<issue-number>``` with the Github issue number
    and ```<some-short-description>``` with your description of the thing you are implementing.
 4. Code on that branch.
 5. Push to your remote when ready.
 6. Create pull request.
 7. We will review code, suggest and required changes and merge to master when it is ready.