//
//  AppDelegate.swift
//  My Lightwell App
//
//  Created by Team Lightwell on 1/31/18.
//  Copyright © 2018 Hullabalu. All rights reserved.
//

import UIKit
import LightwellKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
    var window: UIWindow?

    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {

        let story = LWKStory("ProjectConfig")
        
        self.window = UIWindow()
        self.window?.rootViewController = story.viewController
        self.window?.makeKeyAndVisible()

        return true
    }
}

