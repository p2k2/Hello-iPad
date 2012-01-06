//
//  DetailViewController.h
//  iPadHelloWorld
//
//  Created by Brandon Trebitowski on 2/1/10.
//  Copyright RightSprite 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UIPopoverControllerDelegate, UISplitViewControllerDelegate> {
    
    UIPopoverController *popoverController;
    UINavigationBar *navigationBar;
    
    id detailItem;
	
	IBOutlet UIImageView * fruitImageView;
}

@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic, retain) IBOutlet UINavigationBar *navigationBar;

@property (nonatomic, retain) id detailItem;

@property (nonatomic, retain) IBOutlet UIImageView * fruitImageView;

@end
