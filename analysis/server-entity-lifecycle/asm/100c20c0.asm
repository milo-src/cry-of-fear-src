
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c20c0 <.text+0xc10c0>:
100c20c0:	55                   	push   ebp
100c20c1:	8b ec                	mov    ebp,esp
100c20c3:	56                   	push   esi
100c20c4:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100c20c7:	8b f1                	mov    esi,ecx
100c20c9:	e8 e2 c8 f4 ff       	call   0x1000e9b0
100c20ce:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c20d1:	83 f8 ff             	cmp    eax,0xffffffff
100c20d4:	7e 3a                	jle    0x100c2110
100c20d6:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100c20dc:	75 09                	jne    0x100c20e7
100c20de:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100c20e5:	75 0d                	jne    0x100c20f4
100c20e7:	c7 81 34 01 00 00 00 	mov    DWORD PTR [ecx+0x134],0x0
100c20ee:	00 00 00 
100c20f1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c20f4:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100c20fa:	8b ce                	mov    ecx,esi
100c20fc:	e8 df c8 f4 ff       	call   0x1000e9e0
100c2101:	8b 06                	mov    eax,DWORD PTR [esi]
100c2103:	8b ce                	mov    ecx,esi
100c2105:	ff 90 c0 01 00 00    	call   DWORD PTR [eax+0x1c0]
100c210b:	5e                   	pop    esi
100c210c:	5d                   	pop    ebp
100c210d:	c2 04 00             	ret    0x4
100c2110:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c2115:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100c2118:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c211e:	03 01                	add    eax,DWORD PTR [ecx]
100c2120:	50                   	push   eax
100c2121:	68 8c 98 1a 10       	push   0x101a988c
100c2126:	6a 02                	push   0x2
100c2128:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c212e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c2131:	83 c4 10             	add    esp,0x10
100c2134:	c7 80 2c 01 00 00 00 	mov    DWORD PTR [eax+0x12c],0x0
100c213b:	00 00 00 
100c213e:	5e                   	pop    esi
100c213f:	5d                   	pop    ebp
100c2140:	c2 04 00             	ret    0x4
