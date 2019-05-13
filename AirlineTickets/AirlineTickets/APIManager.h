//
//  APIManager.h
//  AirlineTickets
//
//  Created by Станислав Лемешаев on 13/05/2019.
//  Copyright © 2019 Станислав Лемешаев. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface APIManager : NSObject
+ (instancetype)sharedInstance;
- (void)cityForCurrentIP:(void (^)(City *city))completion;
@end

NS_ASSUME_NONNULL_END
