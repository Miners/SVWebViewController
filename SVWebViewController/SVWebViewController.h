//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

@interface SVWebViewController : UIViewController

/// This provides finer control to the toolbar state when the view controller is about to be popped. It help us keep consistency with the previous view controller‘s toolbar state which can cause glitchiness during edge swipe back if it is shown and hidden in quick succession.
@property (nonatomic, assign, getter = isPreviousViewControllerToolbarHidden) BOOL previousViewControllerToolbarHidden;

- (instancetype)initWithAddress:(NSString*)urlString;
- (instancetype)initWithURL:(NSURL*)URL;
- (instancetype)initWithURLRequest:(NSURLRequest *)request;

@end
