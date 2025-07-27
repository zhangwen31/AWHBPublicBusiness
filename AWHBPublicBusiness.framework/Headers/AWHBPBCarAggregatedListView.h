//
//  AWHBPBCarAggregatedListView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/1/13.
//

#import <UIKit/UIKit.h>
#import <AWHBBasicBusiness/AWHBBCarModel.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^ReturnBtnCarBlock)(AWHBBCarModel *model);

@interface AWHBPBCarAggregatedListView : UIView

@property (nonatomic, strong, readonly) UITableView *tableView;

@property(nonatomic, strong) NSArray<AWHBBCarModel *> *carModelArray;

@property(nonatomic, copy) ReturnBtnCarBlock returnBtnCarBlock;

@end

NS_ASSUME_NONNULL_END
