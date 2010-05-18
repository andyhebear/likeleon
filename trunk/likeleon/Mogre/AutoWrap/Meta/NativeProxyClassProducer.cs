#region GPL license
/*
 * This source file is part of the AutoWrap code generator of the
 * MOGRE project (http://mogre.sourceforge.net).
 * 
 * Copyright (C) 2006-2007 Argiris Kirtzidis
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */
#endregion

using System;
using System.Collections.Generic;
using System.Text;

namespace AutoWrap.Meta
{
    class NativeProxyClassProducer : ClassProducer
    {
        public override bool IsNativeClass
        {
            get { return true; }
        }

        public static string GetProxyName(DefClass type)
        {
            string name = type.FullNativeName;
            name = name.Substring(name.IndexOf("::") + 2);
            return name.Replace("::", "_") + "_Proxy";
        }

        //protected List<DefFunction> _protectedFunctions = new List<DefFunction>();

        public NativeProxyClassProducer(Wrapper wrapper, DefClass t, IndentStringBuilder sb)
            : base(wrapper, t, sb)
        {
            //SearchProtectedFunctions(_t);
        }

        //protected virtual void SearchProtectedFunctions(DefClass type)
        //{
        //    foreach (DefFunction func in type.Functions)
        //    {
        //        if (func.IsDeclarableFunction)
        //        {
        //            if (func.ProtectionType == ProtectionType.Protected
        //                && !func.IsStatic
        //                && !func.IsAbstract)
        //            {
        //                if (!ContainsFunction(func, _protectedFunctions))
        //                    _protectedFunctions.Add(func);
        //            }
        //        }
        //    }

        //    foreach (DefClass iface in type.GetInterfaces())
        //        SearchProtectedFunctions(iface);

        //    if (type.BaseClass != null)
        //        SearchProtectedFunctions(type.BaseClass);
        //}

        private string _proxyName;
        protected virtual string ProxyName
        {
            get
            {
                if (_proxyName == null)
                    _proxyName = GetProxyName(_t);

                return _proxyName;
            }
        }

        protected virtual void AddNativeMethodParams(DefFunction f)
        {
            for (int i = 0; i < f.Parameters.Count; i++)
            {
                DefParam param = f.Parameters[i];
                _sb.Append(" ");

                _sb.Append(param.NativeTypeName);
                _sb.Append(" " + param.Name);

                if (i < f.Parameters.Count - 1) _sb.Append(",");
            }
        }

        protected override void AddPreBody()
        {
            _sb.AppendLine("//################################################################");
            _sb.AppendLine("//" + ProxyName);
            _sb.AppendLine("//################################################################\n");
        }

        protected override void AddBody()
        {
            AddFields();

            _sb.AppendLine();
            if (_t.Constructors.Length > 0)
            {
                foreach (DefFunction func in _t.Constructors)
                    AddConstructor(func);
            }
            else
                AddConstructor(null);

            foreach (DefFunction func in _overridableFunctions)
            {
                _sb.AppendLine();
                AddOverridableFunction(func);
            }

            //foreach (DefFunction func in _protectedFunctions)
            //{
            //    _sb.AppendLine();
            //    AddProtectedFunction(func);
            //}
        }

        protected virtual void AddFields()
        {
        }

        protected virtual void AddConstructor(DefFunction f)
        {
        }

        protected virtual void AddOverridableFunction(DefFunction f)
        {
        }

        //protected virtual void AddProtectedFunction(DefFunction f)
        //{
        //}
    }
}
