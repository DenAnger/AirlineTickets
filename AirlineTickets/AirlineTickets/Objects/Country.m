//
//  Country.m
//  AirlineTickets
//
//  Created by Станислав Лемешаев on 04/05/2019.
//  Copyright © 2019 Станислав Лемешаев. All rights reserved.
//

#import "Country.h"

@implementation Country
- (instancetype)initWithDictionary:(NSDictionary *)dictionary
{
    self = [super init];
    if (self) {
        _currency = [dictionary valueForKey:@"currency"];
        _translations = [dictionary valueForKey:@"name_translations"];
        _name = [dictionary valueForKey:@"name"];
        _code = [dictionary valueForKey:@"code"];
    }
    return self;
}
@end
