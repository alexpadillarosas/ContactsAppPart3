//
//  Contact.h
//  ContactsAppPart2
//
//  Created by alex on 20/9/20.
//  Copyright © 2020 alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface Contact : NSObject

@property UIImage* photo;
@property NSString* name;
@property NSString* position;
@property NSString* email;
@property NSString* phone;


- (instancetype)initWithPhoto: (UIImage*) photo
                        name: (NSString*) name
                    position: (NSString*) position
                       email: (NSString*) email
                        phone: (NSString*) phone;

@end

NS_ASSUME_NONNULL_END
