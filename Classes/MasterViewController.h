//
//  MasterViewController.h
//  iPadHelloWorld
//
//  Created by Brandon Trebitowski on 2/1/10.
//  Copyright RightSprite 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController {
    DetailViewController *detailViewController;
	NSMutableArray * fruits;
}

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;
@property (nonatomic, retain) NSMutableArray *fruits;

@end
