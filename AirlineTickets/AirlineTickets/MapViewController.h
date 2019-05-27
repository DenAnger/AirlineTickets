//
//  MapViewController.h
//  AirlineTickets
//
//  Created by Станислав Лемешаев on 20/05/2019.
//  Copyright © 2019 Станислав Лемешаев. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "DataManager.h"

NS_ASSUME_NONNULL_BEGIN

@interface MapViewController : UIViewController
- (void)setPrices:(NSArray *)prices;
@end

NS_ASSUME_NONNULL_END
