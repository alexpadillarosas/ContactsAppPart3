# ContactsAppPart3
  In this chapter we will work on adding Bar Button Items and using unwind segues.

## Adding + Bar Button Item 
![Simulator Screen Shot - iPhone SE (2nd generation) - 2021-05-12 at 22 50 18](https://user-images.githubusercontent.com/4823319/117979647-7e375380-b376-11eb-9c27-7e045c7487cd.png)
* In the object library search for Bar Button Item
	* Drag one up to the upper-right of the navigation bar.
	* To turn it from an “Item” button into a “+” button, you need to adjust the Bar Button Item’s attributes.
	  *	In the attribute Inspector -> property: System Item, select Add.
  * Add a new View Controller (AddContactViewController) that will be the destination of clicking on the + button.
  * Now, to get this “Add” screen to show you need to control + drag from the “plus (+)” button on the view controller previously created (The scene you just added onto the Storyboard) 
  * Select Action Segue as "Show" 
    * If you run the app, you will see  the < Contacts button by default. As we want to create an image that contains Cancel & Save Buttons in the navigation bar (that is the reason of the + button) this approach would not help us.
  * To reach our expectation, we need to make a few changes:
  * Select Action Segue as “Present Modally” you will see appear 2 more options, change the **Presentation** attribute to “Over Current Context”
    * Embed the destination View Controller in a navigation controller (This is needed in order to avoid the previous < Contacts button added by the previous navigation controller)
    * Run the app, now there is no < Contacts button, and instead we can place our Cancel & Save Buttons (Bar Button Item) in the navigation bar
    * Change System Item of each button  Cancel and Save already exists.
  
--------------

## Adding the Cancel and Save Bar Button Items
![Simulator Screen Shot - iPhone SE (2nd generation) - 2021-05-12 at 23 07 26](https://user-images.githubusercontent.com/4823319/117980104-f30a8d80-b376-11eb-9c1f-6c3f379c8b29.png)
* Note that what it is missing is to dismiss the View Controller after Clicking in the Cancel button.
  * We will need an unwind segue (find some useful information here: https://developer.apple.com/documentation/uikit/resource_management/dismissing_a_view_controller_with_an_unwind_segue?language=objc
  * Go to the ContactsTableViewController.m (the one that has the + button) and add a method, start typing unwind and use the autocomplete.
  * ```- (IBAction)unwindToContactsTableViewController:(UIStoryboardSegue *)unwindSegue {
              UIViewController *sourceViewController = unwindSegue.sourceViewController;
              // Use data from the view controller which initiated the unwind segue

              if([sourceViewController isKindOfClass:[AddContactViewController class]]){
                  NSLog(@"it worked again");
              }
          }
     ```
  * After this go back to the AddContactViewController and Ctrl + drag the button to the Exit control icon at the top of the view controller’s scene, and select the method **unwindToContactsTableViewController** 
  --------------

## Wrapping up!
* We have manage to add a plus, cancel and save buttons in the navigation bar, all done inside the storyboard, plus a code snippet to dismiss the current AddContactViewController and return to ContactsTableViewController.



  
  
  
  
