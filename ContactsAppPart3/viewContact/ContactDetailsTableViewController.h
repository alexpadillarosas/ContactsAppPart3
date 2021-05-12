//
//  ContactDetailsTableViewController.h
//  ContactsAppPart2
//
//  Created by alex on 20/9/20.
//  Copyright © 2020 alex. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Contact.h"

NS_ASSUME_NONNULL_BEGIN

@interface ContactDetailsTableViewController : UITableViewController

@property Contact* contact;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *positionLabel;
@property (weak, nonatomic) IBOutlet UIButton *emailButton;
@property (weak, nonatomic) IBOutlet UIButton *phoneButton;

@end

NS_ASSUME_NONNULL_END
