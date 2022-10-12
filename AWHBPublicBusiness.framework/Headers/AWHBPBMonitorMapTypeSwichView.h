//
//  AWHBPBMonitorMapTypeSwichView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>
typedef void(^RerurnSingleCarFunctionBlock)(NSString * _Nullable string,UIButton * _Nullable button);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBMonitorMapTypeSwichView : UIView
@property(nonatomic,copy)RerurnSingleCarFunctionBlock RerurnSingleCarFunctionBlock;
@property(nonatomic,strong)UIButton *showCloseBtn;
@end

NS_ASSUME_NONNULL_END
