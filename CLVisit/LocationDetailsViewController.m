//
//  LocationDetailsViewController.m
//  CLVisit
//
//  Created by Linda NG on 10/28/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//

#import "LocationDetailsViewController.h"

@implementation LocationDetailsViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.longitudeLabel.text = [NSString stringWithFormat:@"Longitude: %@",self.visit.longitude];
    self.latitudeLabel.text = [NSString stringWithFormat:@"Latitude: %@", self.visit.latitude];
    self.horizontalAccuracyLabel.text = [NSString stringWithFormat:@"Horizontal Accuracy: %@", self.visit.horizontalAccuracy];
    self.arrivalDateLabel.text = [NSString stringWithFormat:@"Arrival Date: %@", self.visit.arrivalDate];
    self.departureDateLabel.text = [NSString stringWithFormat:@"Departure Date: %@", self.visit.departureDate];
    // Do any additional setup after loading the view.
}


@end

