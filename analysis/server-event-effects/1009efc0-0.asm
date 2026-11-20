
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009efc0 <.text+0x9dfc0>:
1009efc0:	56                   	push   esi
1009efc1:	8b f1                	mov    esi,ecx
1009efc3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009efc6:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
1009efcd:	00 00 00 
1009efd0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009efd3:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
1009efda:	00 00 00 
1009efdd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009efe0:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x43000000
1009efe7:	00 00 43 
1009efea:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009efed:	c7 80 4c 01 00 00 02 	mov    DWORD PTR [eax+0x14c],0x2
1009eff4:	00 00 00 
1009eff7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1009effa:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
1009f000:	83 e0 01             	and    eax,0x1
1009f003:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
1009f009:	8b ce                	mov    ecx,esi
1009f00b:	8b 06                	mov    eax,DWORD PTR [esi]
1009f00d:	ff 50 30             	call   DWORD PTR [eax+0x30]
1009f010:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009f013:	83 c0 08             	add    eax,0x8
1009f016:	50                   	push   eax
1009f017:	56                   	push   esi
1009f018:	e8 c3 af 07 00       	call   0x10119fe0
1009f01d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009f020:	68 a0 82 1b 10       	push   0x101b82a0
1009f025:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1009f02b:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1009f031:	83 c4 10             	add    esp,0x10
1009f034:	5e                   	pop    esi
1009f035:	c3                   	ret
