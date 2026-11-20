
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048ef0 <.text+0x47ef0>:
10048ef0:	55                   	push   ebp
10048ef1:	8b ec                	mov    ebp,esp
10048ef3:	56                   	push   esi
10048ef4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10048ef7:	57                   	push   edi
10048ef8:	8b f9                	mov    edi,ecx
10048efa:	85 f6                	test   esi,esi
10048efc:	74 63                	je     0x10048f61
10048efe:	8b 06                	mov    eax,DWORD PTR [esi]
10048f00:	8b ce                	mov    ecx,esi
10048f02:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
10048f08:	85 c0                	test   eax,eax
10048f0a:	74 55                	je     0x10048f61
10048f0c:	ff 76 04             	push   DWORD PTR [esi+0x4]
10048f0f:	e8 cc 96 fc ff       	call   0x100125e0
10048f14:	83 c4 04             	add    esp,0x4
10048f17:	85 c0                	test   eax,eax
10048f19:	74 46                	je     0x10048f61
10048f1b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10048f1e:	83 b8 cc 01 00 00 00 	cmp    DWORD PTR [eax+0x1cc],0x0
10048f25:	74 3a                	je     0x10048f61
10048f27:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
10048f2d:	85 c9                	test   ecx,ecx
10048f2f:	74 30                	je     0x10048f61
10048f31:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048f36:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10048f3c:	03 c1                	add    eax,ecx
10048f3e:	50                   	push   eax
10048f3f:	6a 00                	push   0x0
10048f41:	e8 4a f6 0c 00       	call   0x10118590
10048f46:	8b c8                	mov    ecx,eax
10048f48:	83 c4 08             	add    esp,0x8
10048f4b:	85 c9                	test   ecx,ecx
10048f4d:	74 12                	je     0x10048f61
10048f4f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10048f52:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
10048f55:	8b 80 cc 01 00 00    	mov    eax,DWORD PTR [eax+0x1cc]
10048f5b:	89 81 cc 01 00 00    	mov    DWORD PTR [ecx+0x1cc],eax
10048f61:	5f                   	pop    edi
10048f62:	5e                   	pop    esi
10048f63:	5d                   	pop    ebp
10048f64:	c2 10 00             	ret    0x10
