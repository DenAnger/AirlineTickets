//
//  SearchRequest.h
//  AirlineTickets
//
//  Created by Станислав Лемешаев on 07/05/2019.
//  Copyright © 2019 Станислав Лемешаев. All rights reserved.
//

#ifndef SearchRequest_h
#define SearchRequest_h
typedef struct SearchRequest {
    __unsafe_unretained NSString *origin;
    __unsafe_unretained NSString *destination;
    __unsafe_unretained NSDate *departDate;
    __unsafe_unretained NSDate *returnDate;
} SearchRequest;

#endif /* SearchRequest_h */
