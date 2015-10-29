//
//  Visit+CoreDataProperties.h
//  CLVisit
//
//  Created by Linda NG on 10/28/15.
//  Copyright © 2015 Linda NG. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Visit.h"

NS_ASSUME_NONNULL_BEGIN

@interface Visit (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *latitude;
@property (nullable, nonatomic, retain) NSNumber *horizontalAccuracy;
@property (nullable, nonatomic, retain) NSDate *arrivalDate;
@property (nullable, nonatomic, retain) NSDate *departureDate;
@property (nullable, nonatomic, retain) NSNumber *longitude;

@end

NS_ASSUME_NONNULL_END
