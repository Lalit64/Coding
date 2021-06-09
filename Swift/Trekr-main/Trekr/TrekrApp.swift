//
//  TrekrApp.swift
//  Trekr
//
//  Created by Lalit Yalamanchili on 22/12/2020.
//

import SwiftUI

@main
struct TrekrApp: App {
    @StateObject var locations = Locations()

    var body: some Scene {
        WindowGroup {
            TabView {
                NavigationView {
                    ContentView(location: locations.primary)
                }
                .tabItem {
                    Image(systemName: "g.circle")
                    Text("Galileo")
                }

                NavigationView {
                    WorldView()
                }
                .tabItem {
                    Image(systemName: "map")
                    Text("Our Locations")
                }

                NavigationView {
                    TipsView()
                }
                .tabItem {
                    Image(systemName: "curlybraces.square")
                    Text("Coding Tips")
                }
            }
            .environmentObject(locations)
        }
    }
}
