//
//  ContactCellTableViewCell.h
//  ContactsAppPart2
//
//  Created by alex on 20/9/20.
//  Copyright © 2020 alex. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ContactCellTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *photoImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *positionLabel;

@end

NS_ASSUME_NONNULL_END
