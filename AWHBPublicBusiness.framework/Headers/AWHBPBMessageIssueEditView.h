//
//  AWHBPBMessageIssueEditView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBMIReturnBtnSelectState)(NSString *selectState);
@interface AWHBPBMessageIssueEditView : UIView
@property(nonatomic,strong)NSMutableArray *dataArray;
@property(nonatomic,strong)UITableView *tableView;
@property(nonatomic,strong)NSMutableDictionary *colorDic;
@property(nonatomic,copy)AWHBPBMIReturnBtnSelectState ReturnBtnSelectState;
@end

NS_ASSUME_NONNULL_END
