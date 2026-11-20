
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100941f0 <.text+0x931f0>:
100941f0:	55                   	push   ebp
100941f1:	8b ec                	mov    ebp,esp
100941f3:	56                   	push   esi
100941f4:	8b f1                	mov    esi,ecx
100941f6:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100941f9:	f6 82 a4 01 00 00 01 	test   BYTE PTR [edx+0x1a4],0x1
10094200:	74 13                	je     0x10094215
10094202:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10094205:	56                   	push   esi
10094206:	e8 95 56 08 00       	call   0x101198a0
1009420b:	83 c4 04             	add    esp,0x4
1009420e:	8b c6                	mov    eax,esi
10094210:	5e                   	pop    esi
10094211:	5d                   	pop    ebp
10094212:	c2 08 00             	ret    0x8
10094215:	8b 8a d4 01 00 00    	mov    ecx,DWORD PTR [edx+0x1d4]
1009421b:	85 c9                	test   ecx,ecx
1009421d:	74 25                	je     0x10094244
1009421f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10094224:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1009422a:	03 c1                	add    eax,ecx
1009422c:	50                   	push   eax
1009422d:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
10094230:	56                   	push   esi
10094231:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10094234:	56                   	push   esi
10094235:	e8 06 40 02 00       	call   0x100b8240
1009423a:	83 c4 10             	add    esp,0x10
1009423d:	8b c6                	mov    eax,esi
1009423f:	5e                   	pop    esi
10094240:	5d                   	pop    ebp
10094241:	c2 08 00             	ret    0x8
10094244:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10094247:	8b 4a 44             	mov    ecx,DWORD PTR [edx+0x44]
1009424a:	5e                   	pop    esi
1009424b:	89 08                	mov    DWORD PTR [eax],ecx
1009424d:	8b 4a 48             	mov    ecx,DWORD PTR [edx+0x48]
10094250:	89 48 04             	mov    DWORD PTR [eax+0x4],ecx
10094253:	8b 4a 4c             	mov    ecx,DWORD PTR [edx+0x4c]
10094256:	89 48 08             	mov    DWORD PTR [eax+0x8],ecx
10094259:	5d                   	pop    ebp
1009425a:	c2 08 00             	ret    0x8
