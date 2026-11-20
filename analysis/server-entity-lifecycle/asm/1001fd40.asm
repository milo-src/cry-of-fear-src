
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001fd40 <.text+0x1ed40>:
1001fd40:	56                   	push   esi
1001fd41:	8b f1                	mov    esi,ecx
1001fd43:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fd46:	8b 88 b8 00 00 00    	mov    ecx,DWORD PTR [eax+0xb8]
1001fd4c:	85 c9                	test   ecx,ecx
1001fd4e:	74 19                	je     0x1001fd69
1001fd50:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fd55:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001fd5b:	03 c1                	add    eax,ecx
1001fd5d:	50                   	push   eax
1001fd5e:	e8 2d 6c 0f 00       	call   0x10116990
1001fd63:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fd66:	83 c4 04             	add    esp,0x4
1001fd69:	8b 88 ec 01 00 00    	mov    ecx,DWORD PTR [eax+0x1ec]
1001fd6f:	85 c9                	test   ecx,ecx
1001fd71:	74 19                	je     0x1001fd8c
1001fd73:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fd78:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001fd7e:	03 c1                	add    eax,ecx
1001fd80:	50                   	push   eax
1001fd81:	e8 aa 6c 0f 00       	call   0x10116a30
1001fd86:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fd89:	83 c4 04             	add    esp,0x4
1001fd8c:	8b 88 f4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f4]
1001fd92:	85 c9                	test   ecx,ecx
1001fd94:	74 19                	je     0x1001fdaf
1001fd96:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fd9b:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001fda1:	03 c1                	add    eax,ecx
1001fda3:	50                   	push   eax
1001fda4:	e8 87 6c 0f 00       	call   0x10116a30
1001fda9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001fdac:	83 c4 04             	add    esp,0x4
1001fdaf:	8b 88 f8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1f8]
1001fdb5:	5e                   	pop    esi
1001fdb6:	85 c9                	test   ecx,ecx
1001fdb8:	74 14                	je     0x1001fdce
1001fdba:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001fdbf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1001fdc5:	03 c1                	add    eax,ecx
1001fdc7:	50                   	push   eax
1001fdc8:	e8 63 6c 0f 00       	call   0x10116a30
1001fdcd:	59                   	pop    ecx
1001fdce:	c3                   	ret
