
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100180e0 <.text+0x170e0>:
100180e0:	56                   	push   esi
100180e1:	57                   	push   edi
100180e2:	8b f9                	mov    edi,ecx
100180e4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100180e7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100180ed:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100180f3:	8b f0                	mov    esi,eax
100180f5:	83 c4 04             	add    esp,0x4
100180f8:	85 f6                	test   esi,esi
100180fa:	75 13                	jne    0x1001810f
100180fc:	68 5c 61 1a 10       	push   0x101a615c
10018101:	6a 01                	push   0x1
10018103:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10018109:	83 c4 08             	add    esp,0x8
1001810c:	5f                   	pop    edi
1001810d:	5e                   	pop    esi
1001810e:	c3                   	ret
1001810f:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10018112:	8d 46 6c             	lea    eax,[esi+0x6c]
10018115:	69 8a 2c 01 00 00 b0 	imul   ecx,DWORD PTR [edx+0x12c],0xb0
1001811c:	00 00 00 
1001811f:	03 8e a8 00 00 00    	add    ecx,DWORD PTR [esi+0xa8]
10018125:	03 c1                	add    eax,ecx
10018127:	50                   	push   eax
10018128:	8d 46 60             	lea    eax,[esi+0x60]
1001812b:	03 c1                	add    eax,ecx
1001812d:	50                   	push   eax
1001812e:	52                   	push   edx
1001812f:	e8 fc 1e 10 00       	call   0x1011a030
10018134:	83 c4 0c             	add    esp,0xc
10018137:	5f                   	pop    edi
10018138:	5e                   	pop    esi
10018139:	c3                   	ret
1001813a:	cc                   	int3
1001813b:	cc                   	int3
1001813c:	cc                   	int3
1001813d:	cc                   	int3
1001813e:	cc                   	int3
1001813f:	cc                   	int3
