scikit-surgerygoicp
------------------

[![Build Status](https://travis-ci.com/MattClarkson/scikit-surgerygoicp.svg?branch=master)](https://travis-ci.org/github/UCL/scikit-surgerygoicp)
[![Build Status](https://ci.appveyor.com/api/projects/status/5pm89ej732c1ekf0/branch/master)](https://ci.appveyor.com/project/tdowrick/scikit-surgerygoicp)


Purpose
-------

This is a re-wrapping of the GoICP algorithm in https://github.com/aalavandhaann/go-icp_cython using PyBind11.

`pip install scikit-surgerygoicp`

Working on Ubunutu (Python 3.6, 3.7, 3.8), Mac (3.6, 3.7, 3.8) and Windows (3.6, 3.7)

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