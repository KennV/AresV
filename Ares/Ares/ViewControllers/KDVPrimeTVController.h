//
//  MasterViewController.h
//  Ares
//
//  Created by Kenn Villegas on 12/20/17.
//  Copyright © 2017 dubian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Ares+CoreDataModel.h"

@class KDVPrimeViewController;

@interface KDVPrimeTVController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) KDVPrimeViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController<Event *> *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;


@end

