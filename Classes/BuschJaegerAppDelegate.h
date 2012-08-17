/* BuschJaegerAppDelegate.h
 *
 * Copyright (C) 2011  Belledonne Comunications, Grenoble, France
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or   
 *  (at your option) any later version.                                 
 *                                                                      
 *  This program is distributed in the hope that it will be useful,     
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of      
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the       
 *  GNU General Public License for more details.                
 *                                                                      
 *  You should have received a copy of the GNU General Public License   
 *  along with this program; if not, write to the Free Software         
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */    

#import <Foundation/Foundation.h>
#import "BuschJaegerMainView.h"
#import "BuschJaegerCallView.h"
#import "BuschJaegerSettingsView.h"
#import "BuschJaegerConfigParser.h"

@interface BuschJaegerAppDelegate : NSObject<UIApplicationDelegate, LinphoneUICallDelegate> {
    @private
    UIWindow *window;
    BuschJaegerMainView* buschJaegerMainView;
    BuschJaegerCallView* buschJaegerCallView;
    BuschJaegerSettingsView* buschJaegerSettingsView;
    UINavigationController* navigationController;
    BuschJaegerConfigParser* configuration;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet BuschJaegerMainView* buschJaegerMainView;
@property (nonatomic, retain) IBOutlet BuschJaegerCallView* buschJaegerCallView;
@property (nonatomic, retain) IBOutlet BuschJaegerSettingsView* buschJaegerSettingsView;
@property (nonatomic, retain) IBOutlet UINavigationController* navigationController;
@property (readonly) BuschJaegerConfigParser* configuration;

+ (BuschJaegerAppDelegate*)instance;

@end