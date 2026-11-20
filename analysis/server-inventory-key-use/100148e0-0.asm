
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100148e0 <.text+0x138e0>:
100148e0:	55                   	push   ebp
100148e1:	8b ec                	mov    ebp,esp
100148e3:	56                   	push   esi
100148e4:	57                   	push   edi
100148e5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100148e8:	8b f1                	mov    esi,ecx
100148ea:	57                   	push   edi
100148eb:	e8 30 e2 0e 00       	call   0x10102b20
100148f0:	85 c0                	test   eax,eax
100148f2:	75 06                	jne    0x100148fa
100148f4:	5f                   	pop    edi
100148f5:	5e                   	pop    esi
100148f6:	5d                   	pop    ebp
100148f7:	c2 04 00             	ret    0x4
100148fa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100148fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10014902:	6a 12                	push   0x12
10014904:	68 40 16 21 10       	push   0x10211640
10014909:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1001490f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10014915:	56                   	push   esi
10014916:	68 f4 55 1a 10       	push   0x101a55f4
1001491b:	85 d2                	test   edx,edx
1001491d:	74 10                	je     0x1001492f
1001491f:	03 c2                	add    eax,edx
10014921:	8b cf                	mov    ecx,edi
10014923:	50                   	push   eax
10014924:	e8 97 64 10 00       	call   0x1011adc0
10014929:	5f                   	pop    edi
1001492a:	5e                   	pop    esi
1001492b:	5d                   	pop    ebp
1001492c:	c2 04 00             	ret    0x4
1001492f:	03 01                	add    eax,DWORD PTR [ecx]
10014931:	8b cf                	mov    ecx,edi
10014933:	50                   	push   eax
10014934:	e8 87 64 10 00       	call   0x1011adc0
10014939:	5f                   	pop    edi
1001493a:	5e                   	pop    esi
1001493b:	5d                   	pop    ebp
1001493c:	c2 04 00             	ret    0x4
