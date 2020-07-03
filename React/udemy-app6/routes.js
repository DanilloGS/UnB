import * as React from 'react';
import HomePage from './src/HomePage.js';
import CoinPage from './src/CoinPage.js';
import { createStackNavigator } from '@react-navigation/stack';
import { NavigationContainer } from '@react-navigation/native';

const Stack = createStackNavigator();

export default function Routes() {
	return (
		<>
			<NavigationContainer>
				<Stack.Navigator >
					<Stack.Screen
						name="HomePage"
						component={HomePage}
						options={{
							title: "Cara ou Coroa",
							headerStyle: {
								backgroundColor: '#448563',
							},
							headerTintColor: '#fff',
							headerTitleStyle: {
								fontWeight: 'bold',
							},
						}}
					/>
					<Stack.Screen
						name="CoinPage"
						component={CoinPage}
						options={{
							title: "Cara ou Coroa",
							headerStyle: {
								backgroundColor: '#448563',
							},
							headerTintColor: '#fff',
							headerTitleStyle: {
								fontWeight: 'bold',
							},
						}}
					/>
				</Stack.Navigator>
			</NavigationContainer>
		</>
	);
}

