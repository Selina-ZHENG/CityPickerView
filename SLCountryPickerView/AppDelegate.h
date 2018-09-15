//
//  AppDelegate.h
//  SLCountryPickerView
//
//  Created by 郑少玲 on 2018/9/15.
//  Copyright © 2018 郑少玲. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

