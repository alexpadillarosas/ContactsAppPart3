//
//  Contact.m
//  ContactsAppPart2
//
//  Created by alex on 20/9/20.
//  Copyright © 2020 alex. All rights reserved.
//

#import "Contact.h"

@implementation Contact

- (instancetype)init
{
    self = [super init];
    if (self) {
        _photo = nil;
    }
    return self;
}

- (instancetype)initWithPhoto: (UIImage*) photo
                         name: (NSString*) name
                     position: (NSString*) position
                        email: (NSString*) email
                        phone: (NSString*) phone
{
    self = [super init];
    if (self) {
        _photo = photo;
        _name  = name;
        _position = position;
        _email = email;
        _phone = phone;
    }
    return self;
}
@end
