//
//  AWHBPBInformationView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBInformationView : UIView
/** */
@property(nonatomic,strong)NSArray *titleArr;
@property(nonatomic,strong)NSArray *detailArr;
@property(nonatomic,copy)NSString *startAddr;
@property(nonatomic,copy)NSString *endAddr;
@property(nonatomic,copy)NSString *startEndTime;
@end

NS_ASSUME_NONNULL_END
