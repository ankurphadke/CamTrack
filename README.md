# CamTrack

Huge soccer fans that we are, we decided to try and improve the footage that we watch on a daily basis. We figured that we could automatically track the ball and promote smoother transition of play as the ball moves from one end to the other.
We used a raspberry pi camera and open cv to detect the ball. We used Serial reading and writing to communicate between our python code and the arduino motor. The motor then turns in response and rotates the camera if needed. Thus, we have a camera that will automatically stop when the ball is in view which is useful.
Another area that our project could be implemented in is security and the tracking of specific objects/people.

### Challenges we ran into:
- Getting the Raspberry Pi to work
- Connecting Python to Arduino
- Rotation of the Motor

### Accomplishments
- Successfully implementing a functioning prototype for object detection
- Connecting the python code to Arduino using serial reading

### What's next for CamTrack
- We want to incorporate multiple cameras and automatic switching between cameras based on which camera gives the best view of the ball/object.
