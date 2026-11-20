
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017f30 <.text+0x16f30>:
10017f30:	55                   	push   ebp
10017f31:	8b ec                	mov    ebp,esp
10017f33:	83 ec 18             	sub    esp,0x18
10017f36:	56                   	push   esi
10017f37:	57                   	push   edi
10017f38:	8b f9                	mov    edi,ecx
10017f3a:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10017f3d:	ff 77 04             	push   DWORD PTR [edi+0x4]
10017f40:	68 28 61 1a 10       	push   0x101a6128
10017f45:	e8 e6 ec 0f 00       	call   0x10116c30
10017f4a:	8b f0                	mov    esi,eax
10017f4c:	85 f6                	test   esi,esi
10017f4e:	74 17                	je     0x10017f67
10017f50:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10017f53:	6a 16                	push   0x16
10017f55:	68 60 17 21 10       	push   0x10211760
10017f5a:	57                   	push   edi
10017f5b:	68 98 61 1a 10       	push   0x101a6198
10017f60:	e8 ab f0 0f 00       	call   0x10117010
10017f65:	8b f0                	mov    esi,eax
10017f67:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10017f6a:	83 b9 b4 00 00 00 00 	cmp    DWORD PTR [ecx+0xb4],0x0
10017f71:	74 7d                	je     0x10017ff0
10017f73:	8b 91 b8 00 00 00    	mov    edx,DWORD PTR [ecx+0xb8]
10017f79:	85 d2                	test   edx,edx
10017f7b:	74 73                	je     0x10017ff0
10017f7d:	f3 0f 7e 81 dc 00 00 	movq   xmm0,QWORD PTR [ecx+0xdc]
10017f84:	00 
10017f85:	66 0f d6 45 e8       	movq   QWORD PTR [ebp-0x18],xmm0
10017f8a:	8b 81 e4 00 00 00    	mov    eax,DWORD PTR [ecx+0xe4]
10017f90:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
10017f93:	f3 0f 7e 81 e8 00 00 	movq   xmm0,QWORD PTR [ecx+0xe8]
10017f9a:	00 
10017f9b:	66 0f d6 45 f4       	movq   QWORD PTR [ebp-0xc],xmm0
10017fa0:	8b 81 f0 00 00 00    	mov    eax,DWORD PTR [ecx+0xf0]
10017fa6:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10017fa9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017fae:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10017fb4:	03 c2                	add    eax,edx
10017fb6:	50                   	push   eax
10017fb7:	e8 d4 e9 0f 00       	call   0x10116990
10017fbc:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10017fbf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10017fc4:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
10017fca:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10017fd0:	51                   	push   ecx
10017fd1:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
10017fd7:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10017fdd:	8d 45 f4             	lea    eax,[ebp-0xc]
10017fe0:	50                   	push   eax
10017fe1:	8d 45 e8             	lea    eax,[ebp-0x18]
10017fe4:	50                   	push   eax
10017fe5:	ff 77 04             	push   DWORD PTR [edi+0x4]
10017fe8:	e8 43 20 10 00       	call   0x1011a030
10017fed:	83 c4 18             	add    esp,0x18
10017ff0:	5f                   	pop    edi
10017ff1:	8b c6                	mov    eax,esi
10017ff3:	5e                   	pop    esi
10017ff4:	8b e5                	mov    esp,ebp
10017ff6:	5d                   	pop    ebp
10017ff7:	c2 04 00             	ret    0x4
