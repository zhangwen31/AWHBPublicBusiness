//
//  AWHBPBCustomDataModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCustomDataModel : NSObject
//ID号
@property(nonatomic,copy)NSString *code;
//区域明成
@property(nonatomic,copy)NSString *name;
//类型：0-目录;1-区域
@property(nonatomic,copy)NSString *type;
//父ID
@property(nonatomic,copy)NSString *pid;
//区域半径
@property(nonatomic,copy)NSString *radius;
//区域形状
@property(nonatomic,copy)NSString *shape;

@property(nonatomic,copy)NSMutableArray<AWHBPBCustomDataModel *> *childe;

@property(nonatomic,assign)BOOL isSelect;

@end

NS_ASSUME_NONNULL_END
