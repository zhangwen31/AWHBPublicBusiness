//
//  AWHBPBAlarmAnnexDataModel.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/12/23.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAlarmAnnexDataModel : NSObject

@property(nonatomic,strong)NSMutableArray *videoArray;
@property(nonatomic,strong)NSMutableArray *photoArray;
-(id)initWithArray:(NSArray *)arr;

@end

NS_ASSUME_NONNULL_END
