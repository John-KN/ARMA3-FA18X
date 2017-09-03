_plane = FA18X_1;
KILL_INTRO = false;


//SETUP THE CUTSCENE
playMusic ["LeadTrack01_F", 0];
TitleText ["Loading mission data...", "PLAIN"];
cutText ["", "BLACK FADED", 5];
sleep 10;
disableUserInput true;
cutText ["", "BLACK IN", 5];



//works begimimg front
_plane switchcamera "internal";



Sleep 5;
//camera code 1 front
camera = "camera" camcreate [0,0,0];
camera cameraeffect ["EXTERNAL","back"];
camera attachTo [_plane, [0,13,0]];
camera setDir 180;
camera camPrepareFOV 0.750;
camera camCommit 0;



// FA18X_2 IN THE  TENT WORKS
sleep 9;
_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["internal", "back"];
_camera camSetTarget FA18X_2;
_camera camSetRelPos [10,10,1];
_camera camSetFOV 0.700;
_camera camCommit 0;
waituntil {camCommitted _camera};



//CAM1FA18X_2ENDPOS
_camera camSetTarget FA18X_2;
_camera camSetRelPos [-7,5,1];
_camera camSetFOV 0.700;
_camera camCommit 18;
waituntil {camCommitted _camera};



_camera camSetTarget FA18X_2;
_camera camSetRelPos [-5,-5,-4];
_camera camSetFOV 0.200;
_camera camCommit 10;
waituntil {camCommitted _camera};



_camera camSetTarget FA18X_2;
_camera camSetRelPos [-5,-16,-4];
_camera camSetFOV 0.200;
_camera camCommit 10;
waituntil {camCommitted _camera};



_camera camSetTarget FA18X_2;
_camera camSetRelPos [5,-16,-2];
_camera camSetFOV 0.200;
_camera camCommit 8;
waituntil {camCommitted _camera};



//camera code 1
_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["External","BACK"];
_camera attachTo [_plane, [0,15,0]];
_camera setDir 180;
_camera camPrepareFOV 0.750;



//camera code 2_
sleep 7;
_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["External","BACK"];
_camera attachTo [_plane, [0,-18,3]];
_camera setDir 000;
_camera camPrepareFOV 0.750;



//camera code 3_
sleep 10;
_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["External","left"];
_camera attachTo [_plane, [-7,-20,1]];
_camera setDir 000;
_camera camPrepareFOV 0.750;



//camera code 4_left
sleep 15;
_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["external","BACK"];
_camera attachTo [_plane, [6,1,0]];
_camera setDir 270;
_camera camPrepareFOV 0.750;



//camera code 5_right
sleep 19;
_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["external","back"];
_camera attachTo [_plane, [-6,5,0]];
_camera setDir 090;
_camera camPrepareFOV 0.750;



//camera code 6_
sleep 10;



_camera = "camera" camcreate [0,0,0];
_camera cameraeffect ["external","BACK"];
_camera attachTo [_plane, [-11,1,0]];
_camera setDir 090;
_camera camPrepareFOV 0.750;
_camera camCommit 0;



sleep 6;
_camera cameraEffect ["terminate","back"];
camDestroy _camera;


KILL_INTRO = true;
disableUserInput false;