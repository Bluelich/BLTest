//
//  NSObject+BLIntrospection.h
//  Test
//
//  Created by zhouqiang on 25/07/2017.
//  Copyright © 2017 zhouqiang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (BLIntrospection)

+ (NSArray *)classes;
+ (NSArray *)properties;
+ (NSArray *)instanceVariables;
+ (NSArray *)classMethods;
+ (NSArray *)instanceMethods;

+ (NSArray *)protocols;
+ (NSDictionary *)descriptionForProtocol:(Protocol *)proto;


+ (NSString *)parentClassHierarchy;

@end
