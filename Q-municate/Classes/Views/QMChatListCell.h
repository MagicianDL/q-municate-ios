//
//  QMChatListCell.h
//  Q-municate
//
//  Created by Igor Alefirenko on 31/03/2014.
//  Copyright (c) 2014 Quickblox. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QMImageView;

@interface QMChatListCell : UITableViewCell



- (void)configureCellWithDialog:(QBChatDialog *)chatDialog;

@end
