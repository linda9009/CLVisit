//
//  TableViewController.h
//  CLVisit
//
//  Created by Linda NG on 10/27/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import "DataStore.h"
#import "Visit.h"
#import "LocationDetailsViewController.h"


@interface TableViewController : UITableViewController

@property (nonatomic, strong) DataStore *dataStore;
//@property (nonatomic, strong) CLLocationManager *locationManager;

@end

