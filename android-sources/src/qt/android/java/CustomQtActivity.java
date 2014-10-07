package qt.android.java;

import android.os.Handler;

import org.qtproject.qt5.android.bindings.QtActivity;

public class CustomQtActivity extends QtActivity
{
    private static final int BREAK_DURATION = 1000;
	
    private Handler mHandler = new Handler();

    public void paybackTime() {
        mHandler.post(new Runnable() {
            @Override
            public void run() {
                updateQtMoney(100);
                mHandler.postDelayed(this, BREAK_DURATION);
            }
        });
    }
	
    private native void updateQtMoney(int amount);
}
