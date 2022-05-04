## Final Project: Shadows

[Performance](https://youtu.be/rIKR3P4VSP8)

### Vision
What I wanted to do for this project was combine creative embedded systems with another hobby of mine: magic. There are many previous iterations of magicians interacting with shadows, and though this project I thought that I could do one. The basic idea is that it is a kinetic sculpture that makes shadows appear, dissapear, and change. A performer then is able to "interact" with the shadows by moving their shadow in tandem with the generated shadows. In this project, a shadow hand appears into the light, changed to a hand that is holding a card, then disappear out of frame.

### Hardware
The materials used for this project are:
- 2 servos: one to move the shadow, one to change it
- 3d printed parts
- acrylic box as an enclosure
- button for starting the sequence
- an old phone to use as a flashlight
What happens inside the box is that there is a servo that brings a model of a hand down to be connected to a gear, which then turns that axle 90 degrees to show a different shadow. The hand attachment is two perpendicular intersecting models of a hand, one that is empty and one that looks like it is holding a card.

[Video of Internal setup](https://youtu.be/dJuhgczDjkQ)

### Software
The software is actually very simple. It is a small variation from the servo example code with delay timers. There is also a part that waits until the button is pressed to start the shadow sequence. The code is store in [this repo.](https://github.com/akihigaki/shadows)

### Technical Issues
A big part of the issues I faced were hardware related and actually were with the parts that I didn't make. One issue that I faced was that when the axle spinned, since it was free spinning, it fell out of its mount. I fixed this by cutting a small piece of acrylic and gluing it so that it holds the gear, and therefore the axle, in place (you can see this red piece in the setup video above). The other major issue was that the servo horn would bend and almost break when the axle was rotated. This happend in only one direction, so I just configured it so that the axle would only be turned in one direction.

### Future Work
Although this is a good place to stop and finish the project, I believe that this idea has potential to be much better. The communication between the performer and the device could be wireless. The servo system could be a little more robust for more accurate turns. I would also try to make the servos a little more quiet so it does seem like it is more magical rather than technical.
