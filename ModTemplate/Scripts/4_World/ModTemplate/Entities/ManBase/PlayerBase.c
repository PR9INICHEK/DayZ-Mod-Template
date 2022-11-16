modded class PlayerBase // modded keyword for modding existing class
{
 override void OnJumpStart() // overriding existing function
 {
  super.OnJumpStart();   // call the original jump function so we don't break stuff
		
  Print("My first mod, yay!"); // our modded print
  Print("4232"); // our modded print
 }
}