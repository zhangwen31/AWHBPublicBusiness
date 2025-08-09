//
//  AWHBPBCustomAreaHeaderView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/26.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBCustomAreaHeaderView : UIView

@property (nonatomic, strong) NSString *title;

@property (nonatomic, assign) BOOL isAllSelect;

@property (nonatomic, strong) AWHBPBCustomDataModel *model;

@property (nonatomic, copy) void (^AllSelectClick)(BOOL isAllSelect);

@property (nonatomic, copy) void (^SelectAreaClick)(AWHBPBCustomDataModel *model);

- (void)addMenuWithCustomDataModel:(AWHBPBCustomDataModel *)customDataModel;

@end

NS_ASSUME_NONNULL_END
