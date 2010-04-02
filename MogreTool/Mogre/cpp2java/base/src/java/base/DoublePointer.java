package base;

public class DoublePointer extends NumberPointer<Double> {
	
	public DoublePointer(InstancePointer pInstance) {
		super(pInstance);
	}

	private native void _dispose(long pInstance);

	private native double _get(long pInstance);

	private native long _next(long pInstance);

	private native void _set(long pInstance, double value);

	@Override
	public void dispose() {
		if(this.createdByLibrary)
			throw new RuntimeException("Instance created by the library! It's not allowed to dispose it.");
		_dispose(pInstance.value);		
	}
	@Override
	public double doubleValue() {
		return _get(pInstance.value);
	}
	@Override
	public boolean equals(Object obj) {
		if (obj instanceof DoublePointer) {
			return this._get(pInstance.value) == ((DoublePointer) obj)._get(pInstance.value);			
		}
		return super.equals(obj);
	}
	@Override
	public float floatValue() {
		return (float) _get(pInstance.value);
	}
	public Double get()
	{
		return _get(pInstance.value);
	}
	@Override
	public int hashCode() {
		long bits = Double.doubleToLongBits(_get(pInstance.value));
		return (int)(bits ^ (bits >>> 32));
	}

	@Override
	public int intValue() {
		return (int) _get(pInstance.value);
	}

	@Override
	public long longValue() {
		return (long) _get(pInstance.value);
	}

	@Override
	public DoublePointer next() {
		long ptr = _next(pInstance.value);
		if(ptr==0)return null;		
		return new DoublePointer(new InstancePointer(ptr));
	}
	public void set(Double value) {
		_set(pInstance.value, value);
	}

	@Override
	public String toString() {
		return Double.toString(get());
	}
}
