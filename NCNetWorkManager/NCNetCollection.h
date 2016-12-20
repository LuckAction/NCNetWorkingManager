//
//  CNNetCollection.h
//  NCNetWorkManager
//
//  Created by luck chen on 2016/12/17.
//  Copyright © 2016年 luck chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NCNetDataCollect.h"
#import "NCNetTest.h"

@interface NCNetCollection : NSObject

@end

#pragma mark --- UpdateServer ---

@interface UpdateServer : GetSend//继承相应的请求类型
@property(nonatomic,assign) NSInteger age;
@property(nonatomic,strong) NSString *name;

@end
@interface Re_UpdateServer : RecvStruct
@property(nonatomic,assign) BOOL sex;
@property(nonatomic,assign) NSInteger age;
@property(nonatomic,strong) NSString *name;
@property(nonatomic,strong) ServerModel *data;
@property(nonatomic,strong) NCNSMutableArray *userList;

@end
