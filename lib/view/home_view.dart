import 'package:eos_clock_app/widget/clock_widget.dart';
import 'package:flutter/material.dart';

class HomeView extends StatelessWidget {
  const HomeView({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: const Color(0xFFffffff),
      body: SafeArea(
        child: Column(
          crossAxisAlignment: CrossAxisAlignment.stretch,
          children: [
            const Spacer(flex: 9),
            Image.asset('assets/img/eos_logo.jpeg', height: 280),
            const Spacer(),
            const ClockWidget(),
            const Spacer(flex: 7),
          ],
        ),
      ),
    );
  }
}
