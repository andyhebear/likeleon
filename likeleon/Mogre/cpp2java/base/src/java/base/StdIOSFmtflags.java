package base;

public class StdIOSFmtflags<T> extends NativeObject {

	protected StdIOSFmtflags(InstancePointer pInstance) {
		super(pInstance);
	}

	protected StdIOSFmtflags(InstancePointer pInstance, boolean createdByLibrary) {
		super(pInstance, createdByLibrary);
	}

	public void dispose() {
		if (this.createdByLibrary)
			throw new RuntimeException(
					"can't dispose object created by the library");
		_dispose(pInstance.value);
	}

	public T boolalpha, dec, fixed, hex, internal, left, oct, right,
			scientific, showbase, showpoint, showpos, skipws, unitbuf,
			uppercase, adjustfield, basefield, floatfield;

	private native void _dispose(long pInstance);
}
