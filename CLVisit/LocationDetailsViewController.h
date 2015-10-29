//
//  LocationDetailsViewController.h
//  CLVisit
//
//  Created by Linda NG on 10/28/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Visit.h"

@interface LocationDetailsViewController : UIViewController
@property (nonatomic, strong) Visit *visit;
@property (weak, nonatomic) IBOutlet UILabel *longitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *latitudeLabel;
@property (weak, nonatomic) IBOutlet UILabel *horizontalAccuracyLabel;
@property (weak, nonatomic) IBOutlet UILabel *arrivalDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *departureDateLabel;

@end
