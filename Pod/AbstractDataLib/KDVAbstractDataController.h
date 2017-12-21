/*
  KVApolloDataController.h
  DoobDroog

  Created by Kenn Villegas on 8/28/15.
  Copyright © 2015 K3nnV. All rights reserved.
*/

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@interface KDVAbstractDataController : NSObject <NSFetchedResultsControllerDelegate>

@property (nonatomic, retain) NSManagedObjectContext *MOC;

@property (readonly, strong, nonatomic) NSManagedObjectModel *MOM;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *PSK;

@property (strong, nonatomic) NSFetchedResultsController *fetchCon;

@property (nonatomic, copy) NSString* DatabaseName;
@property (nonatomic, copy) NSString* EntityClassName;
@property (nonatomic, assign) BOOL copyDatabaseIfNotPresent;
//
@property (strong, nonatomic) NSArray *miObjects; //(NSMutableArray *)getAllEntities;


- (NSURL *)applicationDocumentsDirectory;

-(instancetype)initAllUp;
// Register a related business controller object
// This causes them to use the same object context
- (void)registerRelatedObject:(KDVAbstractDataController *)controllerObject;
- (void)performAutomaticLightweightMigration;



@end
