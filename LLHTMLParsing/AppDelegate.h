//
//  AppDelegate.h
//  LLHTMLParsing
//
//  Created by Lilong on 2017/8/8.
//  Copyright © 2017年 第七代目. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

