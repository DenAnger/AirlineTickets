//
//  TicketTableViewCell.h
//  AirlineTickets
//
//  Created by Станислав Лемешаев on 14/05/2019.
//  Copyright © 2019 Станислав Лемешаев. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Ticket.h"
#import "APIManager.h"
#import "DataManager.h"
#define AirlineLogo(iata) [NSURL URLWithString:[NSString stringWithFormat:@"https://pics.avs.io/200/200/%@.png", iata]];

NS_ASSUME_NONNULL_BEGIN

@interface TicketTableViewCell : UITableViewCell

@property (nonatomic, strong) Ticket *ticket;

@end

NS_ASSUME_NONNULL_END
